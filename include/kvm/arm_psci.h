/*
 * Copyright (C) 2012,2013 - ARM Ltd
 * Author: Marc Zyngier <marc.zyngier@arm.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __KVM_ARM_PSCI_H__
#define __KVM_ARM_PSCI_H__

#include <uapi/linux/psci.h>

#define KVM_ARM_PSCI_0_1	PSCI_VERSION(0, 1)
#define KVM_ARM_PSCI_0_2	PSCI_VERSION(0, 2)

int kvm_psci_version(struct kvm_vcpu *vcpu);
int kvm_psci_call(struct kvm_vcpu *vcpu);

#endif /* __KVM_ARM_PSCI_H__ */
