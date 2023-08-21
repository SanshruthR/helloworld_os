# Helloworld_os

![GitHub last commit](https://img.shields.io/github/last-commit/SanshruthR/helloworld_os)
![GitHub issues](https://img.shields.io/github/issues/SanshruthR/helloworld_os)
![GitHub pull requests](https://img.shields.io/github/issues-pr/SanshruthR/helloworld_os)
![GitHub](https://img.shields.io/github/license/SanshruthR/helloworld_os)

## Description

A Linux-based OS with a GCC compiler is preferred for kernel compilation. Bochs x86 can be used to run and test the compiled kernel in the Windows Subsystem.

## Configuration

The OS will have the configuration of 20 cylinders, 16 heads, and 63 sectors. Enabling x86 and long mode is compulsory in the CPU ID section, and 16-page support is also recommended. The OS will be allocated 1024 MB of memory. The OS will be booted from the disk.

![image](https://github.com/SanshruthR/helloworld_os/assets/98751980/63ecfd59-1f0c-4a71-9365-d71cef74d414)
![image](https://github.com/SanshruthR/helloworld_os/assets/98751980/7a8aea3c-53bb-4bfb-b401-c06447ded671)
![image](https://github.com/SanshruthR/helloworld_os/assets/98751980/589cd34b-f3fe-4979-bd15-4e8b5c8bb986)



## Bootloader

A bootloader is used to load the basic OS file when the system boots up. It is generally written in assembly. Cs, ds, es, ss are registers and 0x7c00 is the first line where the code is booted up from.



## Build

Build.sh files are used to link ASM files with kernels and the loader. The loader is used to load the kernel into the main file using the bootloader.

## Kernel

A basic kernel code in ASM is used.

## C program in the kernel

Compilation is of all the files is done using build command and gcc.

## Compiled Operating System

The compiled image of the system always has the .img extension. When the .img is compressed, it becomes .iso and the system starts treating it like a disk. The ISO image is bootable and can be booted from a formatted drive by using Rufus. The secondary storage device will contain a live CD and it can be used to boot up the entire OS, which will print hello world when it’ll be booted up. Hence, this is how a custom kernel can be implemented using Assembly language and C. This kernel can further be extended to various functionalities like user input and so on.
