################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../fig07_04.c \
../fig07_06.c \
../fig07_07.c \
../fig07_10.c \
../fig07_11.c \
../fig07_12.c \
../fig07_13.c \
../fig07_14.c \
../fig07_15.c \
../fig07_16.c \
../fig07_17.c \
../fig07_20.c \
../fig07_21.c \
../fig07_24.c \
../fig07_26.c \
../fig07_28.c \
../main.c 

OBJS += \
./fig07_04.o \
./fig07_06.o \
./fig07_07.o \
./fig07_10.o \
./fig07_11.o \
./fig07_12.o \
./fig07_13.o \
./fig07_14.o \
./fig07_15.o \
./fig07_16.o \
./fig07_17.o \
./fig07_20.o \
./fig07_21.o \
./fig07_24.o \
./fig07_26.o \
./fig07_28.o \
./main.o 

C_DEPS += \
./fig07_04.d \
./fig07_06.d \
./fig07_07.d \
./fig07_10.d \
./fig07_11.d \
./fig07_12.d \
./fig07_13.d \
./fig07_14.d \
./fig07_15.d \
./fig07_16.d \
./fig07_17.d \
./fig07_20.d \
./fig07_21.d \
./fig07_24.d \
./fig07_26.d \
./fig07_28.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -std=c99 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


