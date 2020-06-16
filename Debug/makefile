################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include X-CUBE-AI/App/subdir.mk
-include Middlewares/ST/ARM/DSP/Src/TransformFunctions/subdir.mk
-include Middlewares/ST/ARM/DSP/Src/SupportFunctions/subdir.mk
-include Middlewares/ST/ARM/DSP/Src/StatisticsFunctions/subdir.mk
-include Middlewares/ST/ARM/DSP/Src/MatrixFunctions/subdir.mk
-include Middlewares/ST/ARM/DSP/Src/FilteringFunctions/subdir.mk
-include Middlewares/ST/ARM/DSP/Src/FastMathFunctions/subdir.mk
-include Middlewares/ST/ARM/DSP/Src/ControllerFunctions/subdir.mk
-include Middlewares/ST/ARM/DSP/Src/ComplexMathFunctions/subdir.mk
-include Middlewares/ST/ARM/DSP/Src/CommonTables/subdir.mk
-include Middlewares/ST/ARM/DSP/Src/BasicMathFunctions/subdir.mk
-include Drivers/STM32L4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
ventila_3s.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
ventila_3s.list \

OBJCOPY_BIN += \
ventila_3s.bin \


# All Target
all: ventila_3s.elf secondary-outputs

# Tool invocations
ventila_3s.elf: $(OBJS) $(USER_OBJS) C:\Users\caiom\Documents\workspace_1.3.0\ventila_3s\STM32L475VGTX_FLASH.ld
	arm-none-eabi-gcc -o "ventila_3s.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\caiom\Documents\workspace_1.3.0\ventila_3s\STM32L475VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="ventila_3s.map" -Wl,--gc-sections -static -L../Middlewares/ST/AI/Lib --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -u _printf_float -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

ventila_3s.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "ventila_3s.list"
	@echo 'Finished building: $@'
	@echo ' '

ventila_3s.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "ventila_3s.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
