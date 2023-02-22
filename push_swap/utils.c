#include "push_swap.h"

int check_if_duplicate(t_list **head)
{
    t_list *temp, *temp1;

    temp = *head;
    temp1 = temp->next;
	while (temp != NULL) 
	{    
        temp1 = temp->next;
        while (temp1 != NULL) 
		{    
            if(temp->data == temp1->data)
                return (1);
			temp1 = temp1->next;		    
        }
        temp = temp->next;
    }
	return (0);
}

char **check_and_join(int ac,char **av)
{
    char *str;
    int i;

    i = 1;
    str = ""; 
    while (av[i])
    {
        check_string(ac , av[i]);
        str = ft_strjoin(str,av[i]);
        str = ft_strjoin(str, " ");
        i++;
    }
    return (ft_split(str, ' '));
}

void add_element(t_list **head, int ac, char **av)
{
    //t_list *head;
    t_list *temp;
    char **split;
    int i;
    
    i = 0;
    split = check_and_join(ac, av);
    *head = ft_lstnew(ft_atoi(split[i]));
    temp = *head;
    
    i = 1;
    while (split[i])
    {
        ft_lstadd_back(&temp, ft_lstnew(ft_atoi(split[i])));
        i++;
    }
    if (check_if_duplicate(&temp))
        quit();
}
