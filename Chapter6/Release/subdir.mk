################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../fig06_03.c \
../fig06_04.c \
../fig06_05.c \
../fig06_06.c \
../main.c 

OBJS += \
./fig06_03.o \
./fig06_04.o \
./fig06_05.o \
./fig06_06.o \
./main.o 

C_DEPS += \
./fig06_03.d \
./fig06_04.d \
./fig06_05.d \
./fig06_06.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


