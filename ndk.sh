#!/bin/bash

# Custom build script for foe.kernel

# Constants
green='\033[01;32m'
red='\033[01;31m'
blink_red='\033[05;31m'
cyan='\033[0;36m'
yellow='\033[0;33m'
blue='\033[0;34m'
default='\033[0m'

# Define variables
KERNEL_DIR=$PWD
Anykernel_DIR=$KERNEL_DIR/AnyKernel2/
DATE=$(date +"%d%m%Y")
TIME=$(date +"-%H.%M.%S")
KERNEL_NAME="foe"
DEVICE="-RAVEL"
FINAL_ZIP="$KERNEL_NAME""$DEVICE""$DATE""$TIME"

BUILD_START=$(date +"%s")

# Cleanup before
rm -rf $Anykernel_DIR/*zip
rm -rf $Anykernel_DIR/Image.gz

# Make kernel
#function make_kernel() {
  echo -e "$cyan***********************************************"
  echo -e "          Initializing defconfig          "
  echo -e "***********************************************$nocol"
  make ARCH=arm64 O=out merge_kirin970_defconfig
  echo -e "$cyan***********************************************"
  echo -e "             Building kernel          "
  echo -e "***********************************************$nocol"
  PATH=/home/m03/TOOLCHAIN/NDK_20/llvm/prebuilt/linux-x86_64/bin:/home/m03/TOOLCHAIN/NDK_20/aarch64-linux-android-4.9/prebuilt/linux-x86_64/bin:${PATH} \
  make -j$(nproc --all) O=out \
                      ARCH=arm64 \
                      CC=clang \
                      CLANG_TRIPLE=aarch64-linux-gnu- \
                      CROSS_COMPILE=aarch64-linux-android-
export KBUILD_BUILD_USER="m03"
export KBUILD_BUILD_HOST="iframework"
export KBUILD_COMPILER_STRING=$(/home/m03/TOOLCHAIN/CLANG-r365631c/bin/clang --version | head -n 1 | perl -pe 's/\(http.*?\)//gs' | sed -e 's/  */ /g' -e 's/[[:space:]]*$//')

echo -e "$blue**********************************************************************************************************"
echo  "        "
echo  "          ███████╗ ██████╗ ███████╗   ██╗  ██╗███████╗██████╗ ███╗   ██╗███████╗██╗     "
echo  "          ██╔════╝██╔═══██╗██╔════╝   ██║ ██╔╝██╔════╝██╔══██╗████╗  ██║██╔════╝██║"     
echo  "          █████╗  ██║   ██║█████╗     █████╔╝ █████╗  ██████╔╝██╔██╗ ██║█████╗  ██║     "
echo  "          ██╔══╝  ██║   ██║██╔══╝     ██╔═██╗ ██╔══╝  ██╔══██╗██║╚██╗██║██╔══╝  ██║     "
echo  "          ██║     ╚██████╔╝███████╗██╗██║  ██╗███████╗██║  ██║██║ ╚████║███████╗███████╗"
echo  "          ╚═╝      ╚═════╝ ╚══════╝╚═╝╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝╚══════╝╚══════╝"
echo  "        "
echo -e "**********************************************************************************************************"

echo -e "$green***********************************************"
echo  "           Compiling foe.kernel                  "
echo -e "***********************************************"

echo -e "$yellow***********************************************"
echo  "                 Zipping up                    "
echo -e "***********************************************"

# Create the flashable zip
cp $PWD/out/arch/arm64/boot/Image.gz $Anykernel_DIR
cd $Anykernel_DIR
zip -r9 $FINAL_ZIP.zip * -x .git README.md *placeholder

echo -e "$cyan***********************************************"
echo  "            Cleaning up the mess created               "
echo -e "***********************************************$default"

# Cleanup again
cd ../

#//make clean && make mrproper

echo -e "$green**********************************************************************************************************"
echo  "        "
echo  "          ███████╗ ██████╗ ███████╗   ██╗  ██╗███████╗██████╗ ███╗   ██╗███████╗██╗     "
echo  "          ██╔════╝██╔═══██╗██╔════╝   ██║ ██╔╝██╔════╝██╔══██╗████╗  ██║██╔════╝██║"     
echo  "          █████╗  ██║   ██║█████╗     █████╔╝ █████╗  ██████╔╝██╔██╗ ██║█████╗  ██║     "
echo  "          ██╔══╝  ██║   ██║██╔══╝     ██╔═██╗ ██╔══╝  ██╔══██╗██║╚██╗██║██╔══╝  ██║     "
echo  "          ██║     ╚██████╔╝███████╗██╗██║  ██╗███████╗██║  ██║██║ ╚████║███████╗███████╗"
echo  "          ╚═╝      ╚═════╝ ╚══════╝╚═╝╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝╚══════╝╚══════╝"
echo  "        "
echo -e "**********************************************************************************************************"

# Build complete
BUILD_END=$(date +"%s")
DIFF=$(($BUILD_END - $BUILD_START))
echo -e "$green Build completed in $(($DIFF / 60)) minute(s) and $(($DIFF % 60)) seconds.$default"
