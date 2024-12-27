## Analog-Inductance-and-Capacitance-Measuring-Meter

## Overview
This project focuses on designing and building an **analog meter** to measure **inductance** and **capacitance** accurately. It utilizes **oscillators**, **op-amp circuits**, and an **FM detector circuit** that functions as a **Frequency-to-Voltage Converter**. The device provides an analog output that corresponds to the measured inductance or capacitance. This project was developed as part of the **EN 2091 module** to explore practical **analog circuit design** principles.

## Table of Contents
1. [Introduction](#introduction)
2. [Key Concepts and Theories](#key-concepts-and-theories)
3. [Design Approach](#design-approach)
4. [Simulation Results](#simulation-results)
5. [Manufacturing Details](#manufacturing-details)
6. [File Structure](#file-structure)
7. [Installation and Usage](#installation-and-usage)
8. [License](#license)

## Introduction
This project aims to provide an accurate and reliable way to measure inductance and capacitance using analog components without relying on digital components always. Our approach simplifies this process by using basic analog electronics, making it a useful educational tool for understanding frequency-based measurement systems.

The project features:
- **Oscillators** to generate a frequency that is dependent on the inductor capacitor being measured.
- **FM detection** to convert the frequency to a corresponding voltage that can be read by an analog meter.
- **Precision Rectifier** Accurate Demodulation of Small Signals, Improved Signal-to-Noise Ratio (SNR).

## Key Concepts and Theories

### Inductance Measurement
- **Oscillator Circuit:** A sinusoidal signal is generated using an oscillator circuit. The frequency of the signal varies based on the inductance being measured.
- **FM Detector Circuit (Frequency-to-Voltage Converter):** The sinusoidal signal from the oscillator is passed into an FM detector circuit. The detector converts the varying frequency into a proportional DC voltage.
- **Precision Rectifier Circuit:** The DC voltage is further processed through a precision rectifier circuit. This ensures accurate demodulation of small signals and improves the signal-to-noise ratio (SNR).
- **Arduino Analog Reading:** The processed DC voltage is fed into the **Arduino analog input pins**. An equation, derived through interpolation and graph plotting of Voltage vs. Inductance for various test values, is used to calculate the inductance.
- **Display Output:** The calculated inductance value is displayed on an **OLED display** connected to the Arduino.

### Capacitance Measurement
- **Monostable Multivibrator Circuit:** A monostable multivibrator generates a pulse signal. The frequency of this pulse signal depends on the capacitance being measured.
- **Signal Conditioning:** The pulse signal's amplitude is reduced using **two inverting amplifier circuits** to ensure compatibility with the Arduino.
- **Arduino Frequency Reading:** The conditioned pulse signal is fed into the Arduino. The Arduino reads the frequency of the pulse signal.
- **Capacitance Calculation:** Using an equation derived from graph plotting and interpolation of **Frequency vs. Capacitance** values, the capacitance is calculated.
- **Display Output:** The calculated capacitance value is displayed on the **OLED display**.

By combining these analog principles with digital processing via the Arduino, the project provides an effective and accurate tool for measuring inductance and capacitance values.

## Design Approach
The design of the Analog Inductance and Capacitance Measuring Meter follows these key steps:

1. **Oscillator Design:**
   - **Colpitts Oscillator:** Designed using **2N2222 transistors**, **inductors**, and both **ceramic** and **electrolytic capacitors**. The Colpitts oscillator generates a stable sinusoidal waveform with a frequency dependent on the inductance and capacitance in the circuit.
   - **Monostable Multivibrator:** Designed using **TL072CP op-amps** and **1N4148 diodes**. It generates a pulse signal whose frequency depends on the capacitance being measured.

2. **FM Detection:** An **FM detector circuit** was implemented using **TL072CP op-amps**, inductors, and capacitors. The detector converts the varying frequency signal into a corresponding DC voltage.

3. **Filtering and Noise Cancellation:** The signal from the FM detector is conditioned using **TL072CP op-amps** and **1N4148 rectifying diodes** to ensure stability, amplitude correction, and noise reduction.

4. **Calibration:** The system is calibrated to map the frequency-to-voltage conversion factor accurately. Calibration ensures precise inductance and capacitance measurements.

5. **Inverting Amplifier:** An inverting amplifier circuit, designed with **TL072CP op-amps**, is used to adjust the signal's amplitude and polarity for accurate reading and display.

## Simulation Results
Simulations were performed to test the behavior of the oscillator, op-amp circuits, and FM detector. The simulation results demonstrated accurate frequency generation based on the inductance and capacitance, as well as the correct conversion of frequency to voltage.

**Software Used:** LTspice

## Manufacturing Details
The project was designed using **analog components** and fabricated using standard PCB design methods. The following files are included for manufacturing purposes:

- **SolidWorks Models**: Mechanical enclosures and mounting parts.
- **PCB Design Files**: Detailed layout of the circuit for manufacturing the PCB.

## File Structure
The repository contains the following files:
- **/Design**: Schematics, PCB layout files.
- **/Firmware**: Arduino code for measurement and display.
- **/Simulation**: LTspice simulation files.
- **/Documentation**: Project report, calibration graphs.
- **/Enclosure**: SolidWorks design files for the mechanical casing.

## Installation and Usage
- Assemble the hardware components according to the circuit design.
- Upload the provided firmware to the Arduino board.
- Follow the calibration guide to ensure accurate measurements.
- Connect the device to the analog meter for real-time readings.

## License
This project is licensed under the MIT License. See the LICENSE file for details.

