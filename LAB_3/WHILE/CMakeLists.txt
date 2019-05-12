add_library (tlib3 STATIC "main_while.c" "../header/a.c" "1wh_sum.c" "2wh_sum2.c" "3wh_print.c" "4wh_findFirstElement.c" "5wh_findFirstNegatEl.c")
target_include_directories(tlib3 PUBLIC "../header")
add_executable (WHILE "main_while.c" "../header/a.c" "1wh_sum.c" "2wh_sum2.c" "3wh_print.c" "4wh_findFirstElement.c" "5wh_findFirstNegatEl.c" )
target_link_libraries (WHILE tlib3)

