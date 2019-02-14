

void basic_run_function(struct variable_struct *variable_pointer)
{
	register int accumlator_integer=0;
	register double accumlator_double=0;

	memset(variable_pointer,0,sizeof(*variable_pointer));

	BASIC_DEBUG_FUNCTION(0,0,0,3,0,3);
	{
		accumlator_integer=0;
		variable_pointer->x=(double)accumlator_integer;
	}
	BASIC_DEBUG_FUNCTION(4,1,0,7,1,3);
	{
		accumlator_integer=1;
		variable_pointer->y=(double)accumlator_integer;
	}
	BASIC_DEBUG_FUNCTION(8,2,0,11,2,3);
	{
		accumlator_integer=2;
		variable_pointer->z=(double)accumlator_integer;
	}
}


double basic_set_function(struct variable_struct *variable_pointer,int set_variable_id,double set_variable_value)
{
	switch(set_variable_id){
	default:
	case 0:
		variable_pointer->z=set_variable_value;
		return (double)(variable_pointer->z);
	case 1:
		variable_pointer->y=set_variable_value;
		return (double)(variable_pointer->y);
	case 2:
		variable_pointer->x=set_variable_value;
		return (double)(variable_pointer->x);
	};
};


double basic_get_function(struct variable_struct *variable_pointer,int get_variable_id)
{
	switch(get_variable_id){
	default:
	case 0:
		return (double)(variable_pointer->z);
	case 1:
		return (double)(variable_pointer->y);
	case 2:
		return (double)(variable_pointer->x);
	};
};
 