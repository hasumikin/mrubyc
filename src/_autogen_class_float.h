/* Auto generated by make_method_table.rb */
#include "_autogen_builtin_symbol.h"

/*===== Float class =====*/
static const mrbc_sym method_symbols_Float[] = {
#if MRBC_USE_MATH
  MRBC_SYM(MUL_MUL),
#endif
  MRBC_SYM(PLUS_AT),
  MRBC_SYM(MINUS_AT),
  MRBC_SYM(abs),
#if MRBC_USE_STRING
  MRBC_SYM(inspect),
#endif
  MRBC_SYM(to_f),
  MRBC_SYM(to_i),
#if MRBC_USE_STRING
  MRBC_SYM(to_s),
#endif
};

static const mrbc_func_t method_functions_Float[] = {
#if MRBC_USE_MATH
  c_float_power,
#endif
  c_float_positive,
  c_float_negative,
  c_float_abs,
#if MRBC_USE_STRING
  c_float_inspect,
#endif
  c_ineffect,
  c_float_to_i,
#if MRBC_USE_STRING
  c_float_inspect,
#endif
};

struct RBuiltinClass mrbc_class_Float = {
  .sym_id = MRBC_SYM(Float),
  .num_builtin_method = sizeof(method_symbols_Float) / sizeof(mrbc_sym),
  .super = MRBC_CLASS(Object),
  .method_link = 0,
#if defined(MRBC_DEBUG)
  .name = "Float",
#endif
  .method_symbols = method_symbols_Float,
  .method_functions = method_functions_Float,
};
