################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../fig06_03.c \
../fig06_04.c \
../fig06_05.c \
../fig06_06.c \
../fig06_07.c \
../fig06_08.c \
../fig06_09.c \
../fig06_10.c \
../fig06_11.c \
../fig06_12.c \
../fig06_13.c \
../fig06_14.c \
../fig06_15.c \
../fig06_16.c \
../fig06_18.c \
../fig06_19.c \
../fig06_21.c \
../fig06_22.c \
../fig06_23.c \
../main.c 

OBJS += \
./fig06_03.o \
./fig06_04.o \
./fig06_05.o \
./fig06_06.o \
./fig06_07.o \
./fig06_08.o \
./fig06_09.o \
./fig06_10.o \
./fig06_11.o \
./fig06_12.o \
./fig06_13.o \
./fig06_14.o \
./fig06_15.o \
./fig06_16.o \
./fig06_18.o \
./fig06_19.o \
./fig06_21.o \
./fig06_22.o \
./fig06_23.o \
./main.o 

C_DEPS += \
./fig06_03.d \
./fig06_04.d \
./fig06_05.d \
./fig06_06.d \
./fig06_07.d \
./fig06_08.d \
./fig06_09.d \
./fig06_10.d \
./fig06_11.d \
./fig06_12.d \
./fig06_13.d \
./fig06_14.d \
./fig06_15.d \
./fig06_16.d \
./fig06_18.d \
./fig06_19.d \
./fig06_21.d \
./fig06_22.d \
./fig06_23.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -std=c99 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


