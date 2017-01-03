################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../fig05_03.c \
../fig05_04.c \
../fig05_06.c \
../fig05_11.c \
../fig05_12.c \
../fig05_13.c \
../fig05_14.c \
../fig05_16.c \
../fig05_18.c \
../fig05_19.c \
../main.c 

OBJS += \
./fig05_03.o \
./fig05_04.o \
./fig05_06.o \
./fig05_11.o \
./fig05_12.o \
./fig05_13.o \
./fig05_14.o \
./fig05_16.o \
./fig05_18.o \
./fig05_19.o \
./main.o 

C_DEPS += \
./fig05_03.d \
./fig05_04.d \
./fig05_06.d \
./fig05_11.d \
./fig05_12.d \
./fig05_13.d \
./fig05_14.d \
./fig05_16.d \
./fig05_18.d \
./fig05_19.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


