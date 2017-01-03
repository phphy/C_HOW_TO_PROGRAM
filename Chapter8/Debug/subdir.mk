################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../fig08_02.c \
../fig08_03.c \
../fig08_04.c \
../fig08_06.c \
../fig08_07.c \
../fig08_08.c \
../fig08_10.c \
../fig08_11.c \
../fig08_12.c \
../fig08_13.c \
../fig08_15.c \
../fig08_16.c \
../fig08_18.c \
../fig08_20.c \
../fig08_21.c \
../fig08_22.c \
../fig08_23.c \
../fig08_24.c \
../fig08_25.c \
../fig08_26.c \
../fig08_28.c \
../fig08_29.c \
../fig08_30.c \
../fig08_31.c \
../fig08_32.c \
../fig08_34.c \
../fig08_35.c \
../main.c 

OBJS += \
./fig08_02.o \
./fig08_03.o \
./fig08_04.o \
./fig08_06.o \
./fig08_07.o \
./fig08_08.o \
./fig08_10.o \
./fig08_11.o \
./fig08_12.o \
./fig08_13.o \
./fig08_15.o \
./fig08_16.o \
./fig08_18.o \
./fig08_20.o \
./fig08_21.o \
./fig08_22.o \
./fig08_23.o \
./fig08_24.o \
./fig08_25.o \
./fig08_26.o \
./fig08_28.o \
./fig08_29.o \
./fig08_30.o \
./fig08_31.o \
./fig08_32.o \
./fig08_34.o \
./fig08_35.o \
./main.o 

C_DEPS += \
./fig08_02.d \
./fig08_03.d \
./fig08_04.d \
./fig08_06.d \
./fig08_07.d \
./fig08_08.d \
./fig08_10.d \
./fig08_11.d \
./fig08_12.d \
./fig08_13.d \
./fig08_15.d \
./fig08_16.d \
./fig08_18.d \
./fig08_20.d \
./fig08_21.d \
./fig08_22.d \
./fig08_23.d \
./fig08_24.d \
./fig08_25.d \
./fig08_26.d \
./fig08_28.d \
./fig08_29.d \
./fig08_30.d \
./fig08_31.d \
./fig08_32.d \
./fig08_34.d \
./fig08_35.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


