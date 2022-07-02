/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <alfertah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 22:38:48 by alfertah          #+#    #+#             */
/*   Updated: 2022/07/01 22:38:55 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct list
{
	int			data;
	int			index;
	struct list	*next;
	struct list	*prev;
}	t_list;

typedef struct data
{
	int		len;
	char	**str_arr;
	long	*int_arr;
}	t_data;

char	**ft_split(char *s, char c, int *len);
char	*ft_strjoin(char *s1, char const *s2);
size_t	ft_strlen(const char	*s);
void	ft_putstr(char *str);
int		is_sorted(t_data *data);
int		valid_str(char *str);
int		check_duplicate(t_data *data);
long	ft_atoi(const char *str);
void	put_error(char *str, t_data *data);
void	checker(t_data *data, int c, char **v);
void	check_numbers(t_data *data);
t_list	*ft_lstnew(int data);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	sa(t_list **lst);
void	sb(t_list **lst);
void	ss(t_list **lst1, t_list **lst2);
void	ra(t_list **lst);
void	rb(t_list **lst);
void	rr(t_list **lst1, t_list **lst2);
void	pa(t_list **src, t_list **dst);
void	pb(t_list **src, t_list **dst);
void	rra(t_list **lst);
void	rrb(t_list **lst);
void	rrr(t_list **lst1, t_list **lst2);
void	sort_3(t_list **lst);
void	sort_2(t_list **lst);
void	sort_index(t_list **lst, t_data *data);
int		path(t_list **lst, t_data *data);
int		path_2(t_list **lst, t_data *data, int chunk);
void	sort_4_5(t_list **a, t_list **b, t_data *data);
void	sort_more(t_list **a, t_list **b, t_data *data, int chunk);
int		get_pos(t_list *stack, int sort_pos);
int		get_min_dis(int size, int pos);
void	take_to_top(t_list **stack, int pos, int sort_pos, int size);
void	free_list(t_list **lst);
int		ft_isdigit(int c);
void	free_list(t_list **lst);
void	free_all(t_list **a, t_list **b, t_data *data);
void	push(t_list **src, t_list **dst);
void	reverse(t_list **lst);
void	rotate(t_list **lst);
void	swap(t_list **lst);
void	rrr_(t_list **lst1, t_list **lst2);
void	rr_(t_list **lst1, t_list **lst2);
void	ss_(t_list **lst1, t_list **lst2);
int		ft_strcmp(char *s1, char *s2);
void	ft_zero(char *str);
int		check_sorted(t_list *lst);

#endif
