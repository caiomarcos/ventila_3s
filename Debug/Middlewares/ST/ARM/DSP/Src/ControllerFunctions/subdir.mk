################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_f32.c \
../Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_q15.c \
../Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_q31.c \
../Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_f32.c \
../Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_q15.c \
../Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_q31.c \
../Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_sin_cos_f32.c \
../Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_sin_cos_q31.c 

OBJS += \
./Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_f32.o \
./Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_q15.o \
./Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_q31.o \
./Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_f32.o \
./Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_q15.o \
./Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_q31.o \
./Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_sin_cos_f32.o \
./Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_sin_cos_q31.o 

C_DEPS += \
./Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_f32.d \
./Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_q15.d \
./Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_q31.d \
./Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_f32.d \
./Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_q15.d \
./Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_q31.d \
./Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_sin_cos_f32.d \
./Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_sin_cos_q31.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_f32.o: ../Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_f32.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -D__FPU_PRESENT -DARM_MATH_CM4 -DDEBUG -DSTM32L475xx -c -I../Middlewares/ST/ARM/DSP/Inc -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../X-CUBE-AI/App -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_f32.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_q15.o: ../Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_q15.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -D__FPU_PRESENT -DARM_MATH_CM4 -DDEBUG -DSTM32L475xx -c -I../Middlewares/ST/ARM/DSP/Inc -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../X-CUBE-AI/App -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_q15.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_q31.o: ../Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_q31.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -D__FPU_PRESENT -DARM_MATH_CM4 -DDEBUG -DSTM32L475xx -c -I../Middlewares/ST/ARM/DSP/Inc -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../X-CUBE-AI/App -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_init_q31.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_f32.o: ../Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_f32.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -D__FPU_PRESENT -DARM_MATH_CM4 -DDEBUG -DSTM32L475xx -c -I../Middlewares/ST/ARM/DSP/Inc -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../X-CUBE-AI/App -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_f32.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_q15.o: ../Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_q15.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -D__FPU_PRESENT -DARM_MATH_CM4 -DDEBUG -DSTM32L475xx -c -I../Middlewares/ST/ARM/DSP/Inc -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../X-CUBE-AI/App -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_q15.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_q31.o: ../Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_q31.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -D__FPU_PRESENT -DARM_MATH_CM4 -DDEBUG -DSTM32L475xx -c -I../Middlewares/ST/ARM/DSP/Inc -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../X-CUBE-AI/App -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_pid_reset_q31.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_sin_cos_f32.o: ../Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_sin_cos_f32.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -D__FPU_PRESENT -DARM_MATH_CM4 -DDEBUG -DSTM32L475xx -c -I../Middlewares/ST/ARM/DSP/Inc -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../X-CUBE-AI/App -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_sin_cos_f32.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_sin_cos_q31.o: ../Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_sin_cos_q31.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -D__FPU_PRESENT -DARM_MATH_CM4 -DDEBUG -DSTM32L475xx -c -I../Middlewares/ST/ARM/DSP/Inc -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../X-CUBE-AI/App -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/ST/ARM/DSP/Src/ControllerFunctions/arm_sin_cos_q31.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

