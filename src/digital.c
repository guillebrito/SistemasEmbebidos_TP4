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

/** \brief Definición de entradas y salidas digitales
 **
 ** \addtogroup hal HAL
 ** \brief Capa de abstracción de hardware
 ** @{ */

/* === Headers files inclusions =============================================================== */

#include <stdint.h>
#include "digital.h"

/* === Macros definitions ====================================================================== */

/* === Private data type declarations ========================================================== */

/* === Private variable declarations =========================================================== */

/* === Private function declarations =========================================================== */

/* === Public variable definitions ============================================================= */

//! Estructura para almacenar el descriptor de cada salida digital.
struct digital_output_s
{
    uint8_t port; //!< Puerto GPIO de la salida digital.
    uint8_t pin;  //!< Terminal del puerto GPIO de la salida digital.
};

/* === Private variable definitions ============================================================ */

/* === Private function implementation ========================================================= */

/* === Public function implementation ========================================================== */

digital_output_t DigitalOutputCreate(uint8_t port, uint8_t pin)
{
    return 0;
}

void DigitalOutputActivate(digital_output_t output)
{
    return 0;
}

void DigitalOutputDeativate(digital_output_t output)
{
    return 0;
}

void DigitalOutputToggle(digital_output_t output)
{
    return 0;
}

/* === End of documentation ==================================================================== */

/** @} End of module definition for doxygen */
