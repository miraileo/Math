CC              := gcc
CFLAGS 			:= -Wall -Werror -Wextra -std=c11
FUNC_DIR        := ./
FUNC_TEST_DIR   := tests/
OBJ_DIR         := ./
BUILD_DIR		:= ../build/
LIB_HEADER      := s21_math.h
TEST_FLAGS      := -lcheck -lm -lpthread #-lsubunit
GCOV_FLAGS      := -fprofile-arcs -ftest-coverage #-lsubunit
TEST_DIR_BUILD	:= tests/build/


FUNC_SRCS       := $(addprefix $(FUNC_DIR),s21_abs.c \
                                          s21_acos.c \
                                          s21_asin.c \
										  s21_atan.c \
                                          s21_ceil.c \
                                          s21_cos.c \
                                          s21_exp.c \
                                          s21_fabs.c \
                                          s21_floor.c \
                                          s21_fmod.c \
                                          s21_log.c \
                                          s21_pow.c \
                                          s21_sin.c \
                                          s21_sqrt.c \
                                          s21_tan.c \
                                          )

FUNC_OBJS_WITHOUT_OBJECT_DIRNAME = $(FUNC_SRCS:.c=.o)
FUNC_OBJS = $(subst $(FUNC_DIR), $(OBJ_DIR), $(FUNC_OBJS_WITHOUT_OBJECT_DIRNAME))

LIB_STATIC      := s21_math.a

$(LIB_STATIC):$(FUNC_SRCS)
	mkdir tests/build
	$(CC) $(CFLAGS) -c $(FUNC_SRCS)
	ar -rc $@ $(FUNC_OBJS)
	make clean_obj

all: rebuild

build:
	make $(LIB_STATIC)

rebuild: clean build

check:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c *.h
	clang-format -i -style=Google  *.c *.h ./*/*.c ./*/*.h ./*/*/*.c ./*/*/*.h
	clang-format -n -style=Google  *.c *.h ./*/*.c ./*/*.h ./*/*/*.c ./*/*/*.h

test: abs_test \
	acos_test \
	asin_test \
	atan_test \
	ceil_test \
	cos_test \
	exp_test \
	fabs_test \
	floor_test \
	fmod_test \
	log_test \
	pow_test \
	sin_test \
	sqrt_test \
	tan_test

gcov_report:
	mkdir report
	gcc tests/main_test.c *.c $(TEST_FLAGS) $(GCOV_FLAGS) -o ./main_test.out
	./main_test.out
	lcov -t "test" -o test.info -c -d .
	genhtml -o report/ test.info
	open ./report/index.html

abs_test:
	gcc $(FUNC_TEST_DIR)s21_$@.c -L. $(LIB_STATIC) $(TEST_FLAGS) -o $(TEST_DIR_BUILD)$@.out
	./$(TEST_DIR_BUILD)$@.out
acos_test:
	gcc $(FUNC_TEST_DIR)s21_$@.c -L. $(LIB_STATIC) $(TEST_FLAGS) -o $(TEST_DIR_BUILD)$@.out
	$(TEST_DIR_BUILD)$@.out
asin_test:
	gcc $(FUNC_TEST_DIR)s21_$@.c -L. $(LIB_STATIC) $(TEST_FLAGS) -o $(TEST_DIR_BUILD)$@.out
	$(TEST_DIR_BUILD)$@.out
atan_test:
	gcc $(FUNC_TEST_DIR)s21_$@.c -L. $(LIB_STATIC) $(TEST_FLAGS) -o $(TEST_DIR_BUILD)$@.out
	$(TEST_DIR_BUILD)$@.out
ceil_test:
	gcc $(FUNC_TEST_DIR)s21_$@.c -L. $(LIB_STATIC) $(TEST_FLAGS) -o $(TEST_DIR_BUILD)$@.out
	$(TEST_DIR_BUILD)$@.out
cos_test:
	gcc $(FUNC_TEST_DIR)s21_$@.c -L. $(LIB_STATIC) $(TEST_FLAGS) -o $(TEST_DIR_BUILD)$@.out
	$(TEST_DIR_BUILD)$@.out
exp_test:
	gcc $(FUNC_TEST_DIR)s21_$@.c -L. $(LIB_STATIC) $(TEST_FLAGS) -o $(TEST_DIR_BUILD)$@.out
	$(TEST_DIR_BUILD)$@.out
fabs_test:
	gcc $(FUNC_TEST_DIR)s21_$@.c -L. $(LIB_STATIC) $(TEST_FLAGS) -o $(TEST_DIR_BUILD)$@.out
	$(TEST_DIR_BUILD)$@.out
floor_test:
	gcc $(FUNC_TEST_DIR)s21_$@.c -L. $(LIB_STATIC) $(TEST_FLAGS) -o $(TEST_DIR_BUILD)$@.out
	$(TEST_DIR_BUILD)$@.out
fmod_test:
	gcc $(FUNC_TEST_DIR)s21_$@.c -L. $(LIB_STATIC) $(TEST_FLAGS) -o $(TEST_DIR_BUILD)$@.out
	$(TEST_DIR_BUILD)$@.out
log_test:
	gcc $(FUNC_TEST_DIR)s21_$@.c -L. $(LIB_STATIC) $(TEST_FLAGS) -o $(TEST_DIR_BUILD)$@.out
	$(TEST_DIR_BUILD)$@.out
pow_test:
	gcc $(FUNC_TEST_DIR)s21_$@.c -L. $(LIB_STATIC) $(TEST_FLAGS) -o $(TEST_DIR_BUILD)$@.out
	$(TEST_DIR_BUILD)$@.out
sin_test:
	gcc $(FUNC_TEST_DIR)s21_$@.c -L. $(LIB_STATIC) $(TEST_FLAGS) -o $(TEST_DIR_BUILD)$@.out
	$(TEST_DIR_BUILD)$@.out
sqrt_test:
	gcc $(FUNC_TEST_DIR)s21_$@.c -L. $(LIB_STATIC) $(TEST_FLAGS) -o $(TEST_DIR_BUILD)$@.out
	$(TEST_DIR_BUILD)$@.out
tan_test:
	gcc $(FUNC_TEST_DIR)s21_$@.c -L. $(LIB_STATIC) $(TEST_FLAGS) -o $(TEST_DIR_BUILD)$@.out
	$(TEST_DIR_BUILD)$@.out

install_brew:
	cd ~
	curl -fsSL https://rawgit.com/kube/42homebrew/master/install.sh | zsh

install_lcov:
	brew install lcov

clean:
	rm -rf ../*/*.o
	rm -rf ../*/*.out
	rm -rf ../*/*.info
	rm -rf ../*/*.a
	rm -rf ../*/*.g*
	rm -rf ../*/*/*.o
	rm -rf ../*/*/*.out
	rm -rf ../*/*/*.info
	rm -rf ../*/*/*.a
	rm -rf ../*/*/*.g*
	rm -rf ../*/*/*/*.o
	rm -rf ../*/*/*/*.out
	rm -rf ../*/*/*/*.info
	rm -rf ../*/*/*/*.a
	rm -rf ../*/*/*/*.g*
	rm -rf ./object_files
	rm -rf ./tests/build
	rm -rf ./report


clean_obj :
	rm -f *.o
