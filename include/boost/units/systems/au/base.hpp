
#ifndef BOOST_UNITS_AU_BASE_HPP
#define BOOST_UNITS_AU_BASE_HPP

#include <string>

#include <boost/units/static_constant.hpp>
#include <boost/units/unit.hpp>
#include <boost/units/make_system.hpp>

#include <boost/units/base_units/au/reduced_planck_action.hpp>
#include <boost/units/base_units/au/boltzmann_entropy.hpp>
#include <boost/units/base_units/au/bohr_radius.hpp>
#include <boost/units/base_units/au/electron_mass.hpp>
#include <boost/units/base_units/au/elementary_charge.hpp>
#include <boost/units/base_units/angle/radian.hpp>
#include <boost/units/base_units/angle/steradian.hpp>

namespace boost {

namespace units { 

namespace au {

/// placeholder class defining au unit system
typedef make_system<bohr_radius_base_unit,
                    reduced_planck_action_base_unit,
                    electron_mass_base_unit,
                    elementary_charge_base_unit,
                    boltzmann_entropy_base_unit,
                    angle::radian_base_unit,
                    angle::steradian_base_unit>::type system;

/// dimensionless au unit
typedef unit<dimensionless_type,system>         dimensionless;

} // namespace au

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_AU_BASE_HPP
