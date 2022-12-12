//
//  BidmadMacro.h
//  ADOPUtility
//
//  Created by Seungsub Oh on 2022/12/08.
//

#define bidmadWeakify(var) __weak typeof(var) bidmadWeak_##var = var;

#define bidmadStrongify(var) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
if (bidmadWeak_##var == nil) { return; } \
__strong typeof(var) var = bidmadWeak_##var; \
_Pragma("clang diagnostic pop")
