#ifndef BOOST_UNITS_SYSTEMS_AU_ELECTRON_MASS_BASE_UNIT_HPP
#define BOOST_UNITS_SYSTEMS_AU_ELECTRON_MASS_UNIT_HPP

#include <string>

#include <boost/units/config.hpp>
#include <boost/units/base_unit.hpp>
#include <boost/units/physical_dimensions/mass.hpp>
#include <boost/units/base_units/si/kilogram.hpp>
#include <boost/units/conversion.hpp>

BOOST_UNITS_DEFINE_BASE_UNIT_WITH_CONVERSIONS(au, electron_mass, "electron mass", "m_e", 9.1093837139e-31, si::kilogram_base_unit, -902);    // exact conversion

#if BOOST_UNITS_HAS_BOOST_TYPEOF

#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

BOOST_TYPEOF_REGISTER_TYPE(boost::units::au::electron_mass_base_unit)

#endif

#endif // BOOST_UNITS_SYSTEMS_AU_ELECTRON_MASS_BASE_UNIT_HPP
