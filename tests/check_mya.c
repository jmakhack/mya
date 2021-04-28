#include <check.h>
#include <stdlib.h>
#include "../src/mya.h"

START_TEST
(test_CHECK) {
	ck_assert_int_eq(1, 1);
}
END_TEST

Suite *create_mya_test_suite (void) {
	TCase *tc_core = tcase_create("Core");
	tcase_add_test(tc_core, test_CHECK);

	Suite *suite = suite_create("Mya");
	suite_add_tcase(suite, tc_core);
	
	tcase_set_timeout(tc_core, 120);
	return suite;
}

int main (void) {
	Suite *suite = create_mya_test_suite();
	SRunner *suite_runner = srunner_create(suite);

	srunner_run_all(suite_runner, CK_NORMAL);
	int num_failed = srunner_ntests_failed(suite_runner);
	srunner_free(suite_runner);

	return num_failed == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}

