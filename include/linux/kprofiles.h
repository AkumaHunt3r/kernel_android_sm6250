/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2021-2023 Dakkshesh <dakkshesh5@gmail.com>.
 * Copyright (C) 2024 AkumaHunt3r <AkumaHunt3r@protonmail.com>.
 */
#ifndef _KPROFILES_H_
#define _KPROFILES_H_

#ifdef CONFIG_KPROFILES
int kp_active_mode(void);
void kp_set_mode(unsigned int);
void kp_set_mode_rollback(unsigned int, unsigned int);
#else
int kp_active_mode(void) { return 0; }
void kp_set_mode(level unsigned int) { }
void kp_set_mode_rollback(unsigned int, unsigned int) { }
#endif

#endif /* _KPROFILES_H_ */
