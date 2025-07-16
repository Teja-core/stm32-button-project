# 🕒 STM32 Delay Function Using Timer2 (Bare-Metal)

This project demonstrates how to implement a precise millisecond delay function using **Timer2** on the **STM32F407VG Discovery board**, without using HAL or CMSIS drivers.

---

## 📋 Features

- Uses TIM2 in basic upcounting mode
- Achieves delay in milliseconds (`delay_ms(uint32_t ms)`)
- Demonstrates GPIO LED toggling with precise timing
- Written in **pure bare-metal C** (no HAL)

---

## 🧠 Concepts Used

- RCC peripheral clock enabling
- Timer configuration (prescaler and auto-reload)
- Timer register access via `stm32f4xx.h`
- Basic GPIO control

---

## 🧪 Hardware

| Component | Description |
|----------|-------------|
| Board | STM32F407 Discovery |
| Clock | 16 MHz (internal HSI or external crystal) |
| LED Pin | PD12 (green LED) |
| Timer Used | TIM2 (General purpose 32-bit timer) |

---

## 🔧 How It Works

- **Prescaler** divides system clock (16 MHz) to 1 kHz
- **Auto Reload(ARR)** make it as 1000 to get exact 1ms delay  → 1 ms per tick.
- The **counter (CNT)** is cleared and incremented by the timer
- Monitoring UIF Flag in Timer (Polling method).


## 👤 Author
Teja – Embedded Firmware Developer 
