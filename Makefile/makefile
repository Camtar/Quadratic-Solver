CC=gcc
CFLAGS=-std=c11 -Wpedantic -lm

quad_solver: quadSolver1.c calculate_determinant.c quad_Input_Validation.c root_calculator.c
	$(CC) -o quad_solver quadSolver1.c calculate_determinant.c quad_Input_Validation.c root_calculator.c $(CFLAGS)
