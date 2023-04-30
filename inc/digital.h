/************************************************************************************************
Copyright (c) 2023, Guillermo Nicolás Brito <guillermonbrito@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

SPDX-License-Identifier: MIT
*************************************************************************************************/

#ifndef DIGITAL_H
#define DIGITAL_H

/** \brief Definición de entradas y salidas digitales
 **
 ** \addtogroup hal HAL
 ** \brief Capa de abstracción de hardware
 ** @{ */

/* === Headers files inclusions ================================================================ */

#include <stdint.h>

/* === Cabecera C++ ============================================================================ */

#ifdef __cplusplus
extern "C" {
#endif

/* === Public macros definitions =============================================================== */

/* === Public data type declarations =========================================================== */

//! Puntero al descriptor de cada salida digital.
typedef struct digital_output_s * digital_output_t;

/* === Public variable declarations ============================================================ */

/* === Public function declarations ============================================================ */

/**
 * @brief Crea una salida digital.
 * 
 * Esta funcion crea una salida digital según el puerto GPIO y pin indicados.
 * 
 * @param port  Puerto GPIO de la salida.
 * @param pin   Terminal del puerto GPIO correspondiente a la salida.
 * @return digital_output_t Puntero al descriptor de la salida creada.
 */
digital_output_t DigitalOutputCreate(uint8_t port, uint8_t pin);

/**
 * @brief Activa una salida.
 * 
 * @param output Puntero al descriptor de la salida.
 */
void DigitalOutputActivate(digital_output_t output);

/**
 * @brief Desactiva una salida.
 * 
 * @param output Puntero al descriptor de la salida.
 */
void DigitalOutputDeativate(digital_output_t output);

/**
 * @brief Invierte el estado de una salida.
 * 
 * @param output Puntero al descriptor de la salida.
 */
void DigitalOutputToggle(digital_output_t output);

/* === End of documentation ==================================================================== */

#ifdef __cplusplus
}
#endif

/** @} End of module definition for doxygen */

#endif /* DIGITAL_H */
