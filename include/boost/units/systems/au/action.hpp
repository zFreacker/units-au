#ifndef BOOST_UNITS_AU_ACTION_HPP
#define BOOST_UNITS_AU_ACTION_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/action.hpp>

namespace boost {

namespace units { 

namespace au {

typedef unit<action_dimension,au::system>      action;
    
BOOST_UNITS_STATIC_CONSTANT(reduced_planck,action);
BOOST_UNITS_STATIC_CONSTANT(reduced_plancks,action);

} // namespace au

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_AU_ACTION_HPP
