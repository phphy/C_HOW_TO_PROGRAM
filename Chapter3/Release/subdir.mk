################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../fig03_06.c \
../fig03_08.c \
../fig03_10.c \
../fig03_13.c \
../main.c 

OBJS += \
./fig03_06.o \
./fig03_08.o \
./fig03_10.o \
./fig03_13.o \
./main.o 

C_DEPS += \
./fig03_06.d \
./fig03_08.d \
./fig03_10.d \
./fig03_13.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


