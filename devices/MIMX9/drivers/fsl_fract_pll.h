/*
 * Copyright 2023-2024 NXP
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of the copyright holder nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef FSL_FRACT_PLL_H
#define FSL_FRACT_PLL_H

/*!
 * @addtogroup CLOCK_driver
 * @{
 */

/*! @file */

/* Includes */
#include "fsl_common.h"

/* Defines */

/* Types */
typedef struct {
    uint32_t CTRL;
    uint32_t SPREAD_SPECTRUM;
    uint32_t NUMERATOR;
    uint32_t DENOMINATOR;
    uint32_t DIV;
} fracpll_context_t;

typedef struct {
    uint32_t modFreq;
    uint32_t spreadPercent;
    uint32_t enable;
} fracpll_ssc_t;

/* Functions */
bool FRACTPLL_GetEnable(uint32_t pllIdx, uint32_t enMask);
bool FRACTPLL_SetEnable(uint32_t pllIdx, uint32_t enMask, bool enable);
uint64_t FRACTPLL_GetRate(uint32_t pllIdx, bool vcoOp);
bool FRACTPLL_UpdateRate(uint32_t pllIdx, uint32_t mfi, uint32_t mfn,
    uint32_t odiv);
bool FRACTPLL_SetRate(uint32_t pllIdx, bool vcoOp, uint64_t rate);
bool FRACTPLL_GetDfsEnable(uint32_t pllIdx, uint8_t dfsIdx, uint32_t enMask);
bool FRACTPLL_SetDfsEnable(uint32_t pllIdx, uint8_t dfsIdx, uint32_t enMask,
    bool enable);
uint64_t FRACTPLL_GetDfsRate(uint32_t pllIdx, uint8_t dfsIdx, bool div2);
bool FRACTPLL_UpdateDfsRate(uint32_t pllIdx, uint8_t dfsIdx, uint32_t mfi,
    uint32_t mfn);
bool FRACTPLL_SetDfsRate(uint32_t pllIdx, uint8_t dfsIdx, uint64_t rate);
bool FRACTPLL_SetContext(uint32_t pllIdx, const fracpll_context_t *pllContext);
bool FRACTPLL_GetContext(uint32_t pllIdx, fracpll_context_t *pllContext);
bool FRACTPLL_SetSscConfig(uint32_t pllIdx, uint32_t spreadPercent,
    uint32_t modFreq, uint32_t enable);
bool FRACTPLL_GetSscConfig(uint32_t pllIdx, uint32_t *spreadPercent,
    uint32_t *modFreq, uint32_t *enable);
bool FRACTPLL_CalcSscParams(const fracpll_ssc_t *pllSsc, uint64_t rate,
    uint32_t *stop, uint32_t *step);

/* Externs */

#endif /* FSL_FRACT_PLL_H */

/** @} */
