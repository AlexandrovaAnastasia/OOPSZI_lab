add_library (tlib1 STATIC "main_for.c" "../header/a.c" "1for_sum.c" "2for_sum2.c" "3for_print.c" "4for_findFirstElement.c" "5for_findFirstNegatEl.c")
target_include_directories(tlib1 PUBLIC "../header")
add_executable (FOR "main_for.c" "../header/a.c" "1for_sum.c" "2for_sum2.c" "3for_print.c" "4for_findFirstElement.c" "5for_findFirstNegatEl.c" )
target_link_libraries (FOR tlib1)

