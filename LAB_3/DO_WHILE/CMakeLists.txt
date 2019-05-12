add_library (tlib2 STATIC "main_d_w.c" "../header/a.c" "1d_w_sum.c" "2d_w_sum2.c" "3d_w_print.c" "4d_w_findFirstElement.c" "5d_w_findFirstNegatEl.c")
target_include_directories(tlib2 PUBLIC "../header")
add_executable (DO_WHILE "main_d_w.c" "../header/a.c" "1d_w_sum.c" "2d_w_sum2.c" "3d_w_print.c" "4d_w_findFirstElement.c" "5d_w_findFirstNegatEl.c" )
target_link_libraries (DO_WHILE tlib2)

