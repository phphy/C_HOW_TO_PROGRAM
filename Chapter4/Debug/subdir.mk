################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../fig04_01.c \
../fig04_02.c \
../fig04_06.c \
../fig04_07.c \
../fig04_09.c \
../fig04_11.c \
../fig04_12.c \
../main.c 

OBJS += \
./fig04_01.o \
./fig04_02.o \
./fig04_06.o \
./fig04_07.o \
./fig04_09.o \
./fig04_11.o \
./fig04_12.o \
./main.o 

C_DEPS += \
./fig04_01.d \
./fig04_02.d \
./fig04_06.d \
./fig04_07.d \
./fig04_09.d \
./fig04_11.d \
./fig04_12.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


