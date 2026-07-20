<h1 align="center">
  Conway's Game of Life
</h1>

<p align="center">
  Classic cellular automaton written in <b>C</b> using <b>ncurses</b>.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/C-C11-blue.svg" alt="C11">
  <img src="https://img.shields.io/badge/Build-Make-brightgreen.svg" alt="Make">
  <img src="https://img.shields.io/badge/UI-ncurses-green.svg" alt="ncurses">
  <img src="https://img.shields.io/badge/Platform-Linux-orange.svg" alt="Linux">
  <img src="https://img.shields.io/badge/License-MIT-purple.svg" alt="MIT">
  <img src="https://img.shields.io/badge/Terminal-ncurses-5cb85c">
</p>

<p align="center">
  <a href="#-english">🇬🇧 English</a> •
  <a href="#-русский">🇷🇺 Русский</a>
</p>

---

# 🇬🇧 English

## 📖 About

**Conway's Game of Life** is a terminal implementation of the famous cellular automaton written in **C11** using the **ncurses** library.

The simulation is rendered directly in the terminal and supports real-time interaction, adjustable speed, and loading custom starting configurations.

---

## ✨ Features

- Interactive terminal interface
- Smooth rendering with **ncurses**
- Toroidal game field (edge wrapping)
- Adjustable simulation speed
- Built-in default preset
- Support for custom presets via **stdin**
- Modular project architecture
- C11 compliant
- Clean and maintainable code
- Follows structured programming principles

---

## 🎮 Controls

| Key | Action |
|------|--------|
| **A** | Increase simulation speed |
| **Z** | Decrease simulation speed |
| **SPACE** | Quit |

---

## 📂 Project Structure

```text
.
├── LICENSE
├── Makefile
├── README.md
├── presets/
│   ├── preset1.txt
│   ├── preset2.txt
│   ├── preset3.txt
│   ├── preset4.txt
│   └── preset5.txt
└── src/
    ├── core/
    │   ├── life.c
    │   └── life.h
    ├── io/
    │   ├── control.c
    │   ├── control.h
    │   ├── display.c
    │   ├── display.h
    │   ├── input.c
    │   └── input.h
    └── main.c
```

---

## 🛠️ Build

Requirements:

- GCC or Clang
- ncurses

Compile the project:

```bash
make
```

Run with the default preset:

```bash
make run
```

Run with one of the provided presets:

```bash
make run < presets/preset1.txt
```

Clean build files:

```bash
make clean
```

---

## 📜 Rules

The Game of Life follows four simple rules:

- Any live cell with fewer than **2** neighbours dies.
- Any live cell with **2 or 3** neighbours survives.
- Any live cell with more than **3** neighbours dies.
- Any dead cell with exactly **3** neighbours becomes alive.

---

## 🖼️ Preview

> Coming soon...

---

## 💻 Technologies

- C11
- ncurses
- Make
- GCC

---

## 🎯 Learning Goals

- Modular programming
- Cellular automata
- Terminal graphics
- Software architecture
- Clean C code

---

## 📄 License

This project is licensed under the MIT License.

---

# 🇷🇺 Русский

## 📖 О проекте

**Игра «Жизнь» Конвея** — терминальная реализация знаменитого клеточного автомата, написанная на **C11** с использованием библиотеки **ncurses**.

Программа отображает эволюцию клеточного автомата прямо в терминале, позволяет изменять скорость симуляции во время выполнения и загружать собственные стартовые конфигурации.

---

## ✨ Возможности

- Интерактивный терминальный интерфейс
- Отрисовка с использованием **ncurses**
- Замкнутое игровое поле
- Изменение скорости симуляции
- Встроенный стартовый пресет
- Загрузка собственных пресетов через **stdin**
- Модульная архитектура
- Соответствие принципам структурного программирования
- Стандарт C11
- Чистый и понятный код

---

## 🎮 Управление

| Клавиша | Действие |
|---------|----------|
| **A** | Ускорить симуляцию |
| **Z** | Замедлить симуляцию |
| **SPACE** | Выход |

---

## 📂 Структура проекта

```text
.
├── LICENSE
├── Makefile
├── README.md
├── presets/
│   ├── preset1.txt
│   ├── preset2.txt
│   ├── preset3.txt
│   ├── preset4.txt
│   └── preset5.txt
└── src/
    ├── core/
    │   ├── life.c
    │   └── life.h
    ├── io/
    │   ├── control.c
    │   ├── control.h
    │   ├── display.c
    │   ├── display.h
    │   ├── input.c
    │   └── input.h
    └── main.c
```

---

## 🛠️ Сборка

Необходимо:

- GCC или Clang
- ncurses

Сборка проекта:

```bash
make
```

Запуск со встроенным пресетом:

```bash
make run
```

Запуск с одним из готовых пресетов:

```bash
make run < presets/preset1.txt
```

Очистка файлов сборки:

```bash
make clean
```

---

## 📜 Правила

Автомат работает по четырём правилам:

- Живая клетка с менее чем двумя соседями погибает.
- Живая клетка с двумя или тремя соседями продолжает жить.
- Живая клетка с более чем тремя соседями погибает.
- Мёртвая клетка с тремя соседями оживает.

---

## 🖼️ Скриншоты

> В процессе

---

## 💻 Используемые технологии

- C11
- ncurses
- Make
- GCC

---

## Что было изучено

- Модульное программирование
- Клеточные автоматы
- Работа с терминальной графикой
- Архитектура программ на C
- Организация структуры проекта

---

## 📄 Лицензия

Этот проект распространяется под лицензией MIT.
