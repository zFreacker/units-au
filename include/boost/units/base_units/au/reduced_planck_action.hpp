#ifndef BOOST_UNITS_SYSTEMS_AU_REDUCED_PLANCK_ACTION_BASE_UNIT_HPP
#define BOOST_UNITS_SYSTEMS_AU_REDUCED_PLANCK_ACTION_BASE_UNIT_HPP

#include <string>

#include <boost/units/config.hpp>
#include <boost/units/base_unit.hpp>
#include <boost/units/physical_dimensions/action.hpp>
#include <boost/units/systems/si/action.hpp>
#include <boost/units/conversion.hpp>

BOOST_UNITS_DEFINE_BASE_UNIT_WITH_CONVERSIONS(au, reduced_planck_action, "reduced planck action", "hbar", 1.054571817e-34, si::action, -905);    // exact conversion

#if BOOST_UNITS_HAS_BOOST_TYPEOF

#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

BOOST_TYPEOF_REGISTER_TYPE(boost::units::au::reduced_planck_action_base_unit)

#endif

#endif // BOOST_UNITS_SYSTEMS_AU_REDUCED_PLANCK_ACTION_BASE_UNIT_HPP