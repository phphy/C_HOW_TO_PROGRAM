################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../fig11_02.c \
../fig11_06.c \
../fig11_07.c \
../fig11_10.c \
../fig11_11.c \
../main.c 

OBJS += \
./fig11_02.o \
./fig11_06.o \
./fig11_07.o \
./fig11_10.o \
./fig11_11.o \
./main.o 

C_DEPS += \
./fig11_02.d \
./fig11_06.d \
./fig11_07.d \
./fig11_10.d \
./fig11_11.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


