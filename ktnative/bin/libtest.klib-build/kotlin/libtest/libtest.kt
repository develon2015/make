@file:kotlinx.cinterop.InteropStubs
@file:Suppress("UNUSED_VARIABLE", "UNUSED_EXPRESSION")
package libtest

import kotlin.native.SymbolName
import kotlinx.cinterop.*

// NOTE THIS FILE IS AUTO-GENERATED

fun getString(): CPointer<ByteVar>? {
    return interpretCPointer<ByteVar>(kniBridge0())
}

@SymbolName("libtest_kniBridge0")
private external fun kniBridge0(): NativePtr
