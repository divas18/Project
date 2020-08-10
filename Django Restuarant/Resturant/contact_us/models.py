from django.db import models


# Create your models here.

class contact(models.Model):
    name = models.CharField(max_length=20)
    email = models.EmailField(max_length=50)
    contact = models.CharField(max_length=10)
    msg = models.CharField(max_length=2000)