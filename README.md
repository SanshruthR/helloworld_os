# Hello World OS

![OS](https://img.shields.io/badge/HEllo%20World-V%201.0-Teal?style=for-the-badge)



## Description
A monolithic architecture based operating system that runs on bare metal.


## Configuration
A Linux-based OS with a GCC compiler is preferred for kernel compilation. Bochs x86 can be used to run and test the compiled kernel in the Windows Subsystem.

The OS will have the configuration of 20 cylinders, 16 heads, and 63 sectors. Enabling x86 and long mode is compulsory in the CPU ID section, and 16-page support is also recommended. The OS will be allocated 1024 MB of memory. The OS will be booted from the disk.

![image](https://github.com/SanshruthR/helloworld_os/assets/98751980/63ecfd59-1f0c-4a71-9365-d71cef74d414)
![image](https://github.com/SanshruthR/helloworld_os/assets/98751980/7a8aea3c-53bb-4bfb-b401-c06447ded671)
![image](https://github.com/SanshruthR/helloworld_os/assets/98751980/589cd34b-f3fe-4979-bd15-4e8b5c8bb986)



## Bootloader

A bootloader is used to load the basic OS file when the system boots up. It is generally written in assembly. Cs, ds, es, ss are registers and 0x7c00 is the first line where the code is booted up from.
![image](https://github.com/SanshruthR/helloworld_os/assets/98751980/ddf4536d-1141-49c4-bccd-d47317256b23)




## Build

Build.sh files are used to link ASM files with kernels and the loader. The loader is used to load the kernel into the main file using the bootloader.

![image](https://github.com/SanshruthR/helloworld_os/assets/98751980/249a8206-93d8-41b2-88bf-91f9372e80c5)


## Kernel

A basic kernel code in ASM is used.

>
![image](https://github.com/SanshruthR/helloworld_os/assets/98751980/c35a6165-8343-4de9-954e-aa5a3d6d6f92)
![image](https://github.com/SanshruthR/helloworld_os/assets/98751980/755d6440-4b42-434c-8fc3-02f4f0401563)
![image](https://github.com/SanshruthR/helloworld_os/assets/98751980/45b2fdf3-c679-4362-816c-f9435d577df7)




## C program in the kernel

Compilation is of all the files is done using build command and gcc.

![image](https://github.com/SanshruthR/helloworld_os/assets/98751980/33e6908d-f201-4852-8e30-c4ac04f1645f)

## Compiled Operating System

The compiled image of the system always has the .img extension. When the .img is compressed, it becomes .iso and the system starts treating it like a disk. The ISO image is bootable and can be booted from a formatted drive by using Rufus. The secondary storage device will contain a live CD and it can be used to boot up the entire OS, which will print hello world when it’ll be booted up. Hence, this is how a custom kernel can be implemented using Assembly language and C. This kernel can further be extended to various functionalities like user input and so on.
![image](https://github.com/SanshruthR/helloworld_os/assets/98751980/390090fb-8e4a-4ddd-a1ef-f08003fc7490)
## Final Operating System

![image](https://github.com/SanshruthR/helloworld_os/assets/98751980/0d996aee-851a-4e74-a2cf-5b3808bb707c)
