/*
 * test.c
 * Copyright (C) 2017 Yuhei Horibe
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * test.c
 *
 * Kernel module compilation test
 *
 */

#include <linux/interrupt.h>
#include <linux/device.h>
#include <linux/kernel.h>
#include <linux/sysfs.h>
#include <linux/i2c.h>
//#include <linux/regulator/consumer.h>
//#include <linux/slab.h>
#include <linux/types.h>
#include <linux/err.h>
#include <linux/module.h>
#include <linux/bitops.h>

static int test_init(void)
{
	printk("Module test.\n");
	return 0;
}

static void test_exit(void)
{
	printk("Exit module.\n");
}

MODULE_AUTHOR("Yuhei Horibe <yuhei1.horibe@gmail.com>");
MODULE_DESCRIPTION("Kernel module compilation test.");
MODULE_LICENSE("GPL v2");

module_init(test_init);
module_exit(test_exit);

