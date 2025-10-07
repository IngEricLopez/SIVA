# Sistema de Visión Artificial para Inspección de PCBs

Este proyecto implementa un sistema de visión artificial desarrollado en C++ utilizando OpenCV 2.4.9. Su propósito es detectar errores en la manufactura de placas de circuito impreso (PCBs), como diferencias estructurales, componentes faltantes o defectos visuales, mediante comparación de imágenes y procesamiento de patrones.

## 🧠 ¿Qué hace el programa?

- Carga una imagen de referencia (plantilla PCB) y una imagen de inspección.
- Detecta diferencias entre ambas imágenes usando comparación estructural.
- Genera reportes visuales de las áreas con discrepancias.

## 🛠️ Tecnologías utilizadas

- **Lenguaje:** C++
- **Framework de visión:** [OpenCV 2.4.9](https://opencv.org/releases/)
- **Entorno de desarrollo:** Visual Studio 2017
- **Arquitectura:** 32 bits

## ⚙️ Requisitos de instalación

1. Descargar OpenCV 2.4.9 desde la [página oficial](https://opencv.org/releases/).
2. Agregar las siguientes variables de entorno al sistema:
   - `OPENCV_DIR`: ruta al directorio de instalación de OpenCV.
   - Agregar la ruta de las DLLs (por ejemplo, `C:\OpenCV\build\x86\vc12\bin`) al `PATH` del sistema.
3. Abrir el proyecto en Visual Studio 2017 y compilar en modo Debug o Release.

## 📁 Estructura del proyecto
