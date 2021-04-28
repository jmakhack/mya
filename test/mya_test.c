#include <check.h>

START_TEST
(test_CHECK) {
	ck_assert_int_eq(1, 1);
}
END_TEST

Suite *create_mya_test_suite () {
	TCase *test_case = tcase_create("All");
	tcase_add_test(test_case, test_CHECK);

	Suite *suite = suite_create("MyaSuite");
	suite_add_tcase(suite, test_case);
	
	tcase_set_timeout(test_case, 120);
	return suite;
}

int main () {
	Suite *suite = create_mya_test_suite();
	SRunner *suite_runner = srunner_create(suite);

	srunner_set_fork_status(suite_runner, CK_NOFORK);
	srunner_set_log(suite_runner, "test_results.log");
	srunner_run_all(suite_runner, CK_VERBOSE);

	int num_failed = srunner_ntests_failed(suite_runner);

	srunner_free(suite_runner);

	return num_failed == 0 ? 0 : CK_FAILURE;
}

