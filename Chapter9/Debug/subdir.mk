################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../fig09_02.c \
../fig09_04.c \
../fig09_05.c \
../fig09_07.c \
../fig09_08.c \
../fig09_09.c \
../fig09_11.c \
../fig09_12.c \
../fig09_14.c \
../fig09_15.c \
../fig09_18.c \
../fig09_19.c \
../fig09_20.c \
../fig09_21.c \
../fig09_22.c \
../fig09_23.c \
../fig09_24.c \
../main.c 

OBJS += \
./fig09_02.o \
./fig09_04.o \
./fig09_05.o \
./fig09_07.o \
./fig09_08.o \
./fig09_09.o \
./fig09_11.o \
./fig09_12.o \
./fig09_14.o \
./fig09_15.o \
./fig09_18.o \
./fig09_19.o \
./fig09_20.o \
./fig09_21.o \
./fig09_22.o \
./fig09_23.o \
./fig09_24.o \
./main.o 

C_DEPS += \
./fig09_02.d \
./fig09_04.d \
./fig09_05.d \
./fig09_07.d \
./fig09_08.d \
./fig09_09.d \
./fig09_11.d \
./fig09_12.d \
./fig09_14.d \
./fig09_15.d \
./fig09_18.d \
./fig09_19.d \
./fig09_20.d \
./fig09_21.d \
./fig09_22.d \
./fig09_23.d \
./fig09_24.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


