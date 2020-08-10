from django.db import models

# Create your models here.
from django.utils.text import slugify


class Meals(models.Model):
    name = models.CharField(max_length=50)
    description = models.TextField(max_length=500)
    category = models.ForeignKey('category', on_delete=models.SET_NULL, null=True)
    people = models.IntegerField()
    price = models.DecimalField(max_digits=5, decimal_places=2)
    preparation_time = models.PositiveIntegerField()
    image = models.ImageField(upload_to='meals/')
    slug = models.SlugField(blank=True, null=True)

    def save(self, *args, **kwargs):
        if not self.slug and self.name:
            self.slug = slugify(self.name)
        super(Meals, self).save(*args, **kwargs)

    class Meta:  # it is used because in admin panel it shows mealss but i want it as meals
        verbose_name = 'meal'
        verbose_name_plural = 'meals'

    def __str__(self):
        return self.name


class category(models.Model):
    name = models.CharField(max_length=30)

    class Meta:  # it is used because in admin panel it shows mealss but i want it as meals
        verbose_name = 'category'
        verbose_name_plural = 'categories'

    def __str__(self):
        return self.name
