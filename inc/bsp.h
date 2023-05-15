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

#ifndef BSP_H
#define BSP_H

/** \brief Board hardware support
 *
 ** Este módulo brinda las configuraciones de entradas y salidas de la placa EDU-CIAA-NXP para el
 *práctico número 4
 **
 ** \addtogroup bsp BSP
 ** \brief Hardware abstraction layer
 ** @{ */

/* === Headers files inclusions ================================================================ */

#include "digital.h"

/* === Cabecera C++ ============================================================================ */

#ifdef __cplusplus
extern "C"
{
#endif

    /* === Public macros definitions =============================================================== */

    /* === Public data type declarations =========================================================== */

    /**
     * @brief Descriptor de la placa EDU-CIAA-NXP
     *
     * Define un tipo de dato struct que almacena los punteros a los descriptores de cada entrada y
     * salida digital.
     *
     */
    typedef struct board_s
    {
        digital_input_t tec_1; //!< Puntero al descriptor de la entrada tec_1.
        digital_input_t tec_2; //!< Puntero al descriptor de la entrada tec_2.
        digital_input_t tec_3; //!< Puntero al descriptor de la entrada tec_3.
        digital_input_t tec_4; //!< Puntero al descriptor de la entrada tec_4.

        digital_output_t led_r; //!< Puntero al descriptor de la salida led_r.
        digital_output_t led_g; //!< Puntero al descriptor de la salida led_g.
        digital_output_t led_b; //!< Puntero al descriptor de la salida led_b.
        digital_output_t led_1; //!< Puntero al descriptor de la salida led_1.
        digital_output_t led_2; //!< Puntero al descriptor de la salida led_2.
        digital_output_t led_3; //!< Puntero al descriptor de la salida led_3.
    } const * const board_t;

    /* === Public variable declarations ============================================================ */

    /* === Public function declarations ============================================================ */

    /**
     * @brief Crea descriptor de la placa.
     *
     * Crea e inicializa las entradas y salidas de la placa
     *
     * @return board_t Retorna un puntero constante al descriptor creado.
     */
    board_t BoardCreate(void);

    /* === End of documentation ==================================================================== */

#ifdef __cplusplus
}
#endif

/** @} End of module definition for doxygen */

#endif /* BSP_H */
