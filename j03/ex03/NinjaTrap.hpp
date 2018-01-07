/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/07 15:12:54 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
#define NINJATRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
    NinjaTrap(void);
    NinjaTrap(std::string name);
    ~NinjaTrap(void);
    NinjaTrap(const NinjaTrap & cp);
    NinjaTrap & operator=(const NinjaTrap & rhs);

    void rangedAttack(std::string const & target) const;
    void meleeAttack(std::string const & target) const;
    void ninjaShoebox(FragTrap const & target) const;
	void ninjaShoebox(ScavTrap const & target) const;
    void ninjaShoebox(NinjaTrap const & target) const;
};

#endif
