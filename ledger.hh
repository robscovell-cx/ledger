/*
 * Copyright (c) 2003-2023, John Wiegley.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 *
 * - Neither the name of New Artisans LLC nor the names of its
 *   contributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @addtogroup util
 *
 * @file   ledger.hh
 * @author John Wiegley
 */
#pragma once

#include <system.hh>

#define Ledger_VERSION_MAJOR     3
#define Ledger_VERSION_MINOR     3
#define Ledger_VERSION_PATCH     2
#define Ledger_VERSION_PRERELEASE ""
#define Ledger_VERSION_DATE      "20230330"
#define Ledger_VERSION           "3.3.2"

/**
 * @name Default values
 */
/*@{*/

#define DEBUG_MODE 1
#define NO_ASSERTS 0

#if DEBUG_MODE
#define DEBUG_ON    1
#define VERIFY_ON   1
#define TRACING_ON  1
#elif NO_ASSERTS
#define DEBUG_ON    0
#define VERIFY_ON   0
#define TRACING_ON  0
#else
#define DEBUG_ON    0
#define VERIFY_ON   0
#define TRACING_ON  1           // use --trace X to enable
#endif

#define LOGGING_ON 1

#define DOCUMENT_MODEL           0
#define REDUCE_TO_INTEGER        0

/*@}*/

