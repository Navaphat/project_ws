// Generated by gencpp from file mini_ros/AgentData.msg
// DO NOT EDIT!


#ifndef MINI_ROS_MESSAGE_AGENTDATA_H
#define MINI_ROS_MESSAGE_AGENTDATA_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mini_ros
{
template <class ContainerAllocator>
struct AgentData_
{
  typedef AgentData_<ContainerAllocator> Type;

  AgentData_()
    : action0(0.0)
    , action1(0.0)
    , action2(0.0)
    , action3(0.0)
    , action4(0.0)
    , action5(0.0)
    , action6(0.0)
    , action7(0.0)
    , action8(0.0)
    , action9(0.0)
    , action10(0.0)
    , action11(0.0)
    , action12(0.0)
    , action13(0.0)  {
    }
  AgentData_(const ContainerAllocator& _alloc)
    : action0(0.0)
    , action1(0.0)
    , action2(0.0)
    , action3(0.0)
    , action4(0.0)
    , action5(0.0)
    , action6(0.0)
    , action7(0.0)
    , action8(0.0)
    , action9(0.0)
    , action10(0.0)
    , action11(0.0)
    , action12(0.0)
    , action13(0.0)  {
  (void)_alloc;
    }



   typedef float _action0_type;
  _action0_type action0;

   typedef float _action1_type;
  _action1_type action1;

   typedef float _action2_type;
  _action2_type action2;

   typedef float _action3_type;
  _action3_type action3;

   typedef float _action4_type;
  _action4_type action4;

   typedef float _action5_type;
  _action5_type action5;

   typedef float _action6_type;
  _action6_type action6;

   typedef float _action7_type;
  _action7_type action7;

   typedef float _action8_type;
  _action8_type action8;

   typedef float _action9_type;
  _action9_type action9;

   typedef float _action10_type;
  _action10_type action10;

   typedef float _action11_type;
  _action11_type action11;

   typedef float _action12_type;
  _action12_type action12;

   typedef float _action13_type;
  _action13_type action13;





  typedef boost::shared_ptr< ::mini_ros::AgentData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mini_ros::AgentData_<ContainerAllocator> const> ConstPtr;

}; // struct AgentData_

typedef ::mini_ros::AgentData_<std::allocator<void> > AgentData;

typedef boost::shared_ptr< ::mini_ros::AgentData > AgentDataPtr;
typedef boost::shared_ptr< ::mini_ros::AgentData const> AgentDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mini_ros::AgentData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mini_ros::AgentData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mini_ros::AgentData_<ContainerAllocator1> & lhs, const ::mini_ros::AgentData_<ContainerAllocator2> & rhs)
{
  return lhs.action0 == rhs.action0 &&
    lhs.action1 == rhs.action1 &&
    lhs.action2 == rhs.action2 &&
    lhs.action3 == rhs.action3 &&
    lhs.action4 == rhs.action4 &&
    lhs.action5 == rhs.action5 &&
    lhs.action6 == rhs.action6 &&
    lhs.action7 == rhs.action7 &&
    lhs.action8 == rhs.action8 &&
    lhs.action9 == rhs.action9 &&
    lhs.action10 == rhs.action10 &&
    lhs.action11 == rhs.action11 &&
    lhs.action12 == rhs.action12 &&
    lhs.action13 == rhs.action13;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mini_ros::AgentData_<ContainerAllocator1> & lhs, const ::mini_ros::AgentData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mini_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mini_ros::AgentData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mini_ros::AgentData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mini_ros::AgentData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mini_ros::AgentData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mini_ros::AgentData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mini_ros::AgentData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mini_ros::AgentData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb20a647338517e50d32ae4353795371";
  }

  static const char* value(const ::mini_ros::AgentData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb20a647338517e5ULL;
  static const uint64_t static_value2 = 0x0d32ae4353795371ULL;
};

template<class ContainerAllocator>
struct DataType< ::mini_ros::AgentData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mini_ros/AgentData";
  }

  static const char* value(const ::mini_ros::AgentData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mini_ros::AgentData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 action0\n"
"float32 action1\n"
"float32 action2\n"
"float32 action3\n"
"float32 action4\n"
"float32 action5\n"
"float32 action6\n"
"float32 action7\n"
"float32 action8\n"
"float32 action9\n"
"float32 action10\n"
"float32 action11\n"
"float32 action12\n"
"float32 action13\n"
;
  }

  static const char* value(const ::mini_ros::AgentData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mini_ros::AgentData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action0);
      stream.next(m.action1);
      stream.next(m.action2);
      stream.next(m.action3);
      stream.next(m.action4);
      stream.next(m.action5);
      stream.next(m.action6);
      stream.next(m.action7);
      stream.next(m.action8);
      stream.next(m.action9);
      stream.next(m.action10);
      stream.next(m.action11);
      stream.next(m.action12);
      stream.next(m.action13);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AgentData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mini_ros::AgentData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mini_ros::AgentData_<ContainerAllocator>& v)
  {
    s << indent << "action0: ";
    Printer<float>::stream(s, indent + "  ", v.action0);
    s << indent << "action1: ";
    Printer<float>::stream(s, indent + "  ", v.action1);
    s << indent << "action2: ";
    Printer<float>::stream(s, indent + "  ", v.action2);
    s << indent << "action3: ";
    Printer<float>::stream(s, indent + "  ", v.action3);
    s << indent << "action4: ";
    Printer<float>::stream(s, indent + "  ", v.action4);
    s << indent << "action5: ";
    Printer<float>::stream(s, indent + "  ", v.action5);
    s << indent << "action6: ";
    Printer<float>::stream(s, indent + "  ", v.action6);
    s << indent << "action7: ";
    Printer<float>::stream(s, indent + "  ", v.action7);
    s << indent << "action8: ";
    Printer<float>::stream(s, indent + "  ", v.action8);
    s << indent << "action9: ";
    Printer<float>::stream(s, indent + "  ", v.action9);
    s << indent << "action10: ";
    Printer<float>::stream(s, indent + "  ", v.action10);
    s << indent << "action11: ";
    Printer<float>::stream(s, indent + "  ", v.action11);
    s << indent << "action12: ";
    Printer<float>::stream(s, indent + "  ", v.action12);
    s << indent << "action13: ";
    Printer<float>::stream(s, indent + "  ", v.action13);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MINI_ROS_MESSAGE_AGENTDATA_H