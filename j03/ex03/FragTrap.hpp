/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/07 15:13:27 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(void);
    FragTrap(std::string name);
    ~FragTrap(void);
    FragTrap(const FragTrap & cp);
    FragTrap & operator=(const FragTrap & rhs);

    void rangedAttack(std::string const & target) const;
    void meleeAttack(std::string const & target) const;
    void vaulthunter_dot_exe(std::string const & target);
};

#endif
