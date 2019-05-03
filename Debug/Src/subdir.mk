################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/Bluetooth.c \
../Src/Cerpadlo.c \
../Src/External_interupt.c \
../Src/Step_eng.c \
../Src/Ultrasound.c \
../Src/main.c \
../Src/motorcontrol.c \
../Src/stm32l0xx_hal_msp.c \
../Src/stm32l0xx_it.c \
../Src/system_stm32l0xx.c 

OBJS += \
./Src/Bluetooth.o \
./Src/Cerpadlo.o \
./Src/External_interupt.o \
./Src/Step_eng.o \
./Src/Ultrasound.o \
./Src/main.o \
./Src/motorcontrol.o \
./Src/stm32l0xx_hal_msp.o \
./Src/stm32l0xx_it.o \
./Src/system_stm32l0xx.o 

C_DEPS += \
./Src/Bluetooth.d \
./Src/Cerpadlo.d \
./Src/External_interupt.d \
./Src/Step_eng.d \
./Src/Ultrasound.d \
./Src/main.d \
./Src/motorcontrol.d \
./Src/stm32l0xx_hal_msp.d \
./Src/stm32l0xx_it.d \
./Src/system_stm32l0xx.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o: ../Src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -mfloat-abi=soft '-D__weak=__attribute__((weak))' '-D__packed=__attribute__((__packed__))' -DUSE_HAL_DRIVER -DSTM32L073xx -I"C:/Users/jirka/Documents/skola/4 semestr/LAR-hLAVNI/LAR_Prevoz_vody/Inc" -I"C:/Users/jirka/Documents/skola/4 semestr/LAR-hLAVNI/LAR_Prevoz_vody/Drivers/STM32L0xx_HAL_Driver/Inc" -I"C:/Users/jirka/Documents/skola/4 semestr/LAR-hLAVNI/LAR_Prevoz_vody/Drivers/STM32L0xx_HAL_Driver/Inc/Legacy" -I"C:/Users/jirka/Documents/skola/4 semestr/LAR-hLAVNI/LAR_Prevoz_vody/Drivers/CMSIS/Device/ST/STM32L0xx/Include" -I"C:/Users/jirka/Documents/skola/4 semestr/LAR-hLAVNI/LAR_Prevoz_vody/Drivers/CMSIS/Include"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


