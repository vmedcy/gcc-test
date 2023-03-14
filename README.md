# GCC test

## Usage

### Download Arm GNU Toolchain from https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads, for example:

    wget https://developer.arm.com/-/media/Files/downloads/gnu/11.3.rel1/binrel/arm-gnu-toolchain-11.3.rel1-darwin-x86_64-arm-none-eabi.tar.xz
    tar xf arm-gnu-toolchain-11.3.rel1-darwin-x86_64-arm-none-eabi.tar.xz

### Set GCC_DIR variable

    export GCC_DIR="$PWD/arm-gnu-toolchain-11.3.rel1-darwin-x86_64-arm-none-eabi"

### Run the build command

    make -k -B build

## Test cases

### linaro-5825-1.c

https://bugs.linaro.org/show_bug.cgi?id=5825#c14

### linaro-5825-2.c

https://bugs.linaro.org/show_bug.cgi?id=5825#c21

### linaro-5840.cpp

https://bugs.linaro.org/show_bug.cgi?id=5840

Running the toolchain on older CPUs can throw an illegal instruction and stop the build.

    /opt/arm-none-eabi/arm-none-eabi/include/c++/11.2.1/limits:1676:7: internal compiler error: Illegal instruction
    1676 |       max() _GLIBCXX_USE_NOEXCEPT { return __FLT_MAX__; }
        |       ^~~

### linaro-5844.c

https://bugs.linaro.org/show_bug.cgi?id=5844

Not possible to compile code with float point

    test.c:3:3: internal compiler error: Illegal instruction
    3 |   return 1.0 / 120.0;

### linaro-5847.c

https://bugs.linaro.org/show_bug.cgi?id=5847

Overview: 
With new release 11.2-2022.02, a code containing some simple float operation cannot be compiled with aarch64-none-elf-gcc, on my PC (Intel(R) Core(TM) i7-2600 CPU @ 3.40GHz)

Backtrace:

    misc.c:270:9: internal compiler error: Illegal instruction
    270 |         if (Num >= ((float)Inum + (float)0.50)) {

### linaro-5848.cpp

https://bugs.linaro.org/show_bug.cgi?id=5848

    main.cpp:1:1: internal compiler error: Illegal instruction
    1 | constexpr float kSomething = 180.F;

### linaro-5849.cpp

https://bugs.linaro.org/show_bug.cgi?id=5849

    /opt/gcc-arm-11.2-2022.02-x86_64-arm-none-eabi/arm-none-eabi/include/c++/11.2.1/limits:1676:7: internal compiler error: Illegal instruction
    1676 |       max() _GLIBCXX_USE_NOEXCEPT { return __FLT_MAX__; }

### linaro-5867.c

https://bugs.linaro.org/show_bug.cgi?id=5867

Compiling a for loop with optimization level higher than -O0 triggers an internal compiler error

    during GIMPLE pass: profile_estimate
    test.c: In function 'main':
    test.c:3:1: internal compiler error: Illegal instruction: 4

### linaro-5880.c

https://bugs.linaro.org/show_bug.cgi?id=5880

    In function 'HAL_DMAEx_List_InsertNode':
    Internal compiler error: Segmentation fault: 11]

Reported as https://gcc.gnu.org/bugzilla/show_bug.cgi?id=106878

### gcc-106878.c

https://gcc.gnu.org/bugzilla/show_bug.cgi?id=106878

during GIMPLE pass: forwprop
t.c:7:1: internal compiler error: verify_gimple failed
