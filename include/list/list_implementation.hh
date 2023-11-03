#pragma once

/******************************************************************************************
 * 将List各方法的实现部分，简洁地引入List.h
 * 效果等同于将这些实现直接汇入List.h
 * 在export尚未被编译器支持前，如此可将定义与实现分离，以便课程讲解
 ******************************************************************************************/
#include "_share/release.hh"
#include "_share/util.hh"

#include "ListNode.hh"

#include "List_bracket.hh"

#include "List_initialize.hh"
#include "List_copyNodes.hh"
#include "List_constructor_by_copying.hh"
#include "List_destructor.hh"

#include "List_find.hh"
#include "List_search.hh"

#include "List_insert.hh"
#include "List_remove.hh"
#include "List_clear.hh"

#include "List_traverse.hh"

#include "List_sort.hh"
#include "List_insertionSort.hh"
#include "List_selectMax.hh"
#include "List_selectionSort.hh"
#include "List_merge.hh"
#include "List_mergeSort.hh"
#include "List_radixSort.hh"

#include "List_deduplicate.hh"
#include "List_uniquify.hh"

#include "List_reverse1.hh"
//#include "List_reverse2.hh"
//#include "List_reverse3.hh"
