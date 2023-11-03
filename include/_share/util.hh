#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;


#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <typeinfo>
#include "comparator.hh"

#include "checkOrder_Elem.hh"
#include "checkOrder_list.hh"
#include "checkOrder_vector.hh"

#include "double_Elem.hh"
#include "increase_Elem.hh"
#include "hailstone_Elem.hh"
#include "increase_list.hh"
#include "increase_vector.hh"

#include "crc_Elem.hh"
#include "crc_list.hh"
#include "crc_vector.hh"

#include "rand.hh"

#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))

#if defined(DSA_DEBUG)
#define DSA(x) { x }
#else
#define DSA(x)
#endif
