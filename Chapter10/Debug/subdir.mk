################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../fig10_02.c \
../fig10_03.c \
../fig10_05.c \
../fig10_07.c \
../fig10_09.c \
../fig10_13.c \
../fig10_16.c \
../fig10_18.c \
../main.c 

OBJS += \
./fig10_02.o \
./fig10_03.o \
./fig10_05.o \
./fig10_07.o \
./fig10_09.o \
./fig10_13.o \
./fig10_16.o \
./fig10_18.o \
./main.o 

C_DEPS += \
./fig10_02.d \
./fig10_03.d \
./fig10_05.d \
./fig10_07.d \
./fig10_09.d \
./fig10_13.d \
./fig10_16.d \
./fig10_18.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


